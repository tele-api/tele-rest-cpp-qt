/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAIOwnedGifts.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIOwnedGifts::OAIOwnedGifts(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOwnedGifts::OAIOwnedGifts() {
    this->initializeModel();
}

OAIOwnedGifts::~OAIOwnedGifts() {}

void OAIOwnedGifts::initializeModel() {

    m_total_count_isSet = false;
    m_total_count_isValid = false;

    m_gifts_isSet = false;
    m_gifts_isValid = false;

    m_next_offset_isSet = false;
    m_next_offset_isValid = false;
}

void OAIOwnedGifts::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOwnedGifts::fromJsonObject(QJsonObject json) {

    m_total_count_isValid = ::tele_rest::fromJsonValue(m_total_count, json[QString("total_count")]);
    m_total_count_isSet = !json[QString("total_count")].isNull() && m_total_count_isValid;

    m_gifts_isValid = ::tele_rest::fromJsonValue(m_gifts, json[QString("gifts")]);
    m_gifts_isSet = !json[QString("gifts")].isNull() && m_gifts_isValid;

    m_next_offset_isValid = ::tele_rest::fromJsonValue(m_next_offset, json[QString("next_offset")]);
    m_next_offset_isSet = !json[QString("next_offset")].isNull() && m_next_offset_isValid;
}

QString OAIOwnedGifts::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOwnedGifts::asJsonObject() const {
    QJsonObject obj;
    if (m_total_count_isSet) {
        obj.insert(QString("total_count"), ::tele_rest::toJsonValue(m_total_count));
    }
    if (m_gifts.size() > 0) {
        obj.insert(QString("gifts"), ::tele_rest::toJsonValue(m_gifts));
    }
    if (m_next_offset_isSet) {
        obj.insert(QString("next_offset"), ::tele_rest::toJsonValue(m_next_offset));
    }
    return obj;
}

qint32 OAIOwnedGifts::getTotalCount() const {
    return m_total_count;
}
void OAIOwnedGifts::setTotalCount(const qint32 &total_count) {
    m_total_count = total_count;
    m_total_count_isSet = true;
}

bool OAIOwnedGifts::is_total_count_Set() const{
    return m_total_count_isSet;
}

bool OAIOwnedGifts::is_total_count_Valid() const{
    return m_total_count_isValid;
}

QList<OAIOwnedGift> OAIOwnedGifts::getGifts() const {
    return m_gifts;
}
void OAIOwnedGifts::setGifts(const QList<OAIOwnedGift> &gifts) {
    m_gifts = gifts;
    m_gifts_isSet = true;
}

bool OAIOwnedGifts::is_gifts_Set() const{
    return m_gifts_isSet;
}

bool OAIOwnedGifts::is_gifts_Valid() const{
    return m_gifts_isValid;
}

QString OAIOwnedGifts::getNextOffset() const {
    return m_next_offset;
}
void OAIOwnedGifts::setNextOffset(const QString &next_offset) {
    m_next_offset = next_offset;
    m_next_offset_isSet = true;
}

bool OAIOwnedGifts::is_next_offset_Set() const{
    return m_next_offset_isSet;
}

bool OAIOwnedGifts::is_next_offset_Valid() const{
    return m_next_offset_isValid;
}

bool OAIOwnedGifts::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_total_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gifts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_next_offset_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIOwnedGifts::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_total_count_isValid && m_gifts_isValid && true;
}

} // namespace tele_rest
