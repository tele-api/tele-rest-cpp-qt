/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T09:16:57.652454639Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIPaidMediaInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIPaidMediaInfo::OAIPaidMediaInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIPaidMediaInfo::OAIPaidMediaInfo() {
    this->initializeModel();
}

OAIPaidMediaInfo::~OAIPaidMediaInfo() {}

void OAIPaidMediaInfo::initializeModel() {

    m_star_count_isSet = false;
    m_star_count_isValid = false;

    m_paid_media_isSet = false;
    m_paid_media_isValid = false;
}

void OAIPaidMediaInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIPaidMediaInfo::fromJsonObject(QJsonObject json) {

    m_star_count_isValid = ::tele_rest::fromJsonValue(m_star_count, json[QString("star_count")]);
    m_star_count_isSet = !json[QString("star_count")].isNull() && m_star_count_isValid;

    m_paid_media_isValid = ::tele_rest::fromJsonValue(m_paid_media, json[QString("paid_media")]);
    m_paid_media_isSet = !json[QString("paid_media")].isNull() && m_paid_media_isValid;
}

QString OAIPaidMediaInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIPaidMediaInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_star_count_isSet) {
        obj.insert(QString("star_count"), ::tele_rest::toJsonValue(m_star_count));
    }
    if (m_paid_media.size() > 0) {
        obj.insert(QString("paid_media"), ::tele_rest::toJsonValue(m_paid_media));
    }
    return obj;
}

qint32 OAIPaidMediaInfo::getStarCount() const {
    return m_star_count;
}
void OAIPaidMediaInfo::setStarCount(const qint32 &star_count) {
    m_star_count = star_count;
    m_star_count_isSet = true;
}

bool OAIPaidMediaInfo::is_star_count_Set() const{
    return m_star_count_isSet;
}

bool OAIPaidMediaInfo::is_star_count_Valid() const{
    return m_star_count_isValid;
}

QList<OAIPaidMedia> OAIPaidMediaInfo::getPaidMedia() const {
    return m_paid_media;
}
void OAIPaidMediaInfo::setPaidMedia(const QList<OAIPaidMedia> &paid_media) {
    m_paid_media = paid_media;
    m_paid_media_isSet = true;
}

bool OAIPaidMediaInfo::is_paid_media_Set() const{
    return m_paid_media_isSet;
}

bool OAIPaidMediaInfo::is_paid_media_Valid() const{
    return m_paid_media_isValid;
}

bool OAIPaidMediaInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIPaidMediaInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_star_count_isValid && m_paid_media_isValid && true;
}

} // namespace tele_rest
