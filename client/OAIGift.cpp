/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIGift.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIGift::OAIGift(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIGift::OAIGift() {
    this->initializeModel();
}

OAIGift::~OAIGift() {}

void OAIGift::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_sticker_isSet = false;
    m_sticker_isValid = false;

    m_star_count_isSet = false;
    m_star_count_isValid = false;

    m_upgrade_star_count_isSet = false;
    m_upgrade_star_count_isValid = false;

    m_total_count_isSet = false;
    m_total_count_isValid = false;

    m_remaining_count_isSet = false;
    m_remaining_count_isValid = false;
}

void OAIGift::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIGift::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::tele_rest::fromJsonValue(m_id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;

    m_star_count_isValid = ::tele_rest::fromJsonValue(m_star_count, json[QString("star_count")]);
    m_star_count_isSet = !json[QString("star_count")].isNull() && m_star_count_isValid;

    m_upgrade_star_count_isValid = ::tele_rest::fromJsonValue(m_upgrade_star_count, json[QString("upgrade_star_count")]);
    m_upgrade_star_count_isSet = !json[QString("upgrade_star_count")].isNull() && m_upgrade_star_count_isValid;

    m_total_count_isValid = ::tele_rest::fromJsonValue(m_total_count, json[QString("total_count")]);
    m_total_count_isSet = !json[QString("total_count")].isNull() && m_total_count_isValid;

    m_remaining_count_isValid = ::tele_rest::fromJsonValue(m_remaining_count, json[QString("remaining_count")]);
    m_remaining_count_isSet = !json[QString("remaining_count")].isNull() && m_remaining_count_isValid;
}

QString OAIGift::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIGift::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::tele_rest::toJsonValue(m_id));
    }
    if (m_sticker.isSet()) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    if (m_star_count_isSet) {
        obj.insert(QString("star_count"), ::tele_rest::toJsonValue(m_star_count));
    }
    if (m_upgrade_star_count_isSet) {
        obj.insert(QString("upgrade_star_count"), ::tele_rest::toJsonValue(m_upgrade_star_count));
    }
    if (m_total_count_isSet) {
        obj.insert(QString("total_count"), ::tele_rest::toJsonValue(m_total_count));
    }
    if (m_remaining_count_isSet) {
        obj.insert(QString("remaining_count"), ::tele_rest::toJsonValue(m_remaining_count));
    }
    return obj;
}

QString OAIGift::getId() const {
    return m_id;
}
void OAIGift::setId(const QString &id) {
    m_id = id;
    m_id_isSet = true;
}

bool OAIGift::is_id_Set() const{
    return m_id_isSet;
}

bool OAIGift::is_id_Valid() const{
    return m_id_isValid;
}

OAISticker OAIGift::getSticker() const {
    return m_sticker;
}
void OAIGift::setSticker(const OAISticker &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAIGift::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAIGift::is_sticker_Valid() const{
    return m_sticker_isValid;
}

qint32 OAIGift::getStarCount() const {
    return m_star_count;
}
void OAIGift::setStarCount(const qint32 &star_count) {
    m_star_count = star_count;
    m_star_count_isSet = true;
}

bool OAIGift::is_star_count_Set() const{
    return m_star_count_isSet;
}

bool OAIGift::is_star_count_Valid() const{
    return m_star_count_isValid;
}

qint32 OAIGift::getUpgradeStarCount() const {
    return m_upgrade_star_count;
}
void OAIGift::setUpgradeStarCount(const qint32 &upgrade_star_count) {
    m_upgrade_star_count = upgrade_star_count;
    m_upgrade_star_count_isSet = true;
}

bool OAIGift::is_upgrade_star_count_Set() const{
    return m_upgrade_star_count_isSet;
}

bool OAIGift::is_upgrade_star_count_Valid() const{
    return m_upgrade_star_count_isValid;
}

qint32 OAIGift::getTotalCount() const {
    return m_total_count;
}
void OAIGift::setTotalCount(const qint32 &total_count) {
    m_total_count = total_count;
    m_total_count_isSet = true;
}

bool OAIGift::is_total_count_Set() const{
    return m_total_count_isSet;
}

bool OAIGift::is_total_count_Valid() const{
    return m_total_count_isValid;
}

qint32 OAIGift::getRemainingCount() const {
    return m_remaining_count;
}
void OAIGift::setRemainingCount(const qint32 &remaining_count) {
    m_remaining_count = remaining_count;
    m_remaining_count_isSet = true;
}

bool OAIGift::is_remaining_count_Set() const{
    return m_remaining_count_isSet;
}

bool OAIGift::is_remaining_count_Valid() const{
    return m_remaining_count_isValid;
}

bool OAIGift::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_upgrade_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_total_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_remaining_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIGift::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_sticker_isValid && m_star_count_isValid && true;
}

} // namespace tele_rest
