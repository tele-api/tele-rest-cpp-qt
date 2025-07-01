/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
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

#include "OAIUniqueGiftInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIUniqueGiftInfo::OAIUniqueGiftInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIUniqueGiftInfo::OAIUniqueGiftInfo() {
    this->initializeModel();
}

OAIUniqueGiftInfo::~OAIUniqueGiftInfo() {}

void OAIUniqueGiftInfo::initializeModel() {

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_origin_isSet = false;
    m_origin_isValid = false;

    m_owned_gift_id_isSet = false;
    m_owned_gift_id_isValid = false;

    m_transfer_star_count_isSet = false;
    m_transfer_star_count_isValid = false;
}

void OAIUniqueGiftInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIUniqueGiftInfo::fromJsonObject(QJsonObject json) {

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_origin_isValid = ::tele_rest::fromJsonValue(m_origin, json[QString("origin")]);
    m_origin_isSet = !json[QString("origin")].isNull() && m_origin_isValid;

    m_owned_gift_id_isValid = ::tele_rest::fromJsonValue(m_owned_gift_id, json[QString("owned_gift_id")]);
    m_owned_gift_id_isSet = !json[QString("owned_gift_id")].isNull() && m_owned_gift_id_isValid;

    m_transfer_star_count_isValid = ::tele_rest::fromJsonValue(m_transfer_star_count, json[QString("transfer_star_count")]);
    m_transfer_star_count_isSet = !json[QString("transfer_star_count")].isNull() && m_transfer_star_count_isValid;
}

QString OAIUniqueGiftInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIUniqueGiftInfo::asJsonObject() const {
    QJsonObject obj;
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_origin_isSet) {
        obj.insert(QString("origin"), ::tele_rest::toJsonValue(m_origin));
    }
    if (m_owned_gift_id_isSet) {
        obj.insert(QString("owned_gift_id"), ::tele_rest::toJsonValue(m_owned_gift_id));
    }
    if (m_transfer_star_count_isSet) {
        obj.insert(QString("transfer_star_count"), ::tele_rest::toJsonValue(m_transfer_star_count));
    }
    return obj;
}

OAIUniqueGift OAIUniqueGiftInfo::getGift() const {
    return m_gift;
}
void OAIUniqueGiftInfo::setGift(const OAIUniqueGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAIUniqueGiftInfo::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAIUniqueGiftInfo::is_gift_Valid() const{
    return m_gift_isValid;
}

QString OAIUniqueGiftInfo::getOrigin() const {
    return m_origin;
}
void OAIUniqueGiftInfo::setOrigin(const QString &origin) {
    m_origin = origin;
    m_origin_isSet = true;
}

bool OAIUniqueGiftInfo::is_origin_Set() const{
    return m_origin_isSet;
}

bool OAIUniqueGiftInfo::is_origin_Valid() const{
    return m_origin_isValid;
}

QString OAIUniqueGiftInfo::getOwnedGiftId() const {
    return m_owned_gift_id;
}
void OAIUniqueGiftInfo::setOwnedGiftId(const QString &owned_gift_id) {
    m_owned_gift_id = owned_gift_id;
    m_owned_gift_id_isSet = true;
}

bool OAIUniqueGiftInfo::is_owned_gift_id_Set() const{
    return m_owned_gift_id_isSet;
}

bool OAIUniqueGiftInfo::is_owned_gift_id_Valid() const{
    return m_owned_gift_id_isValid;
}

qint32 OAIUniqueGiftInfo::getTransferStarCount() const {
    return m_transfer_star_count;
}
void OAIUniqueGiftInfo::setTransferStarCount(const qint32 &transfer_star_count) {
    m_transfer_star_count = transfer_star_count;
    m_transfer_star_count_isSet = true;
}

bool OAIUniqueGiftInfo::is_transfer_star_count_Set() const{
    return m_transfer_star_count_isSet;
}

bool OAIUniqueGiftInfo::is_transfer_star_count_Valid() const{
    return m_transfer_star_count_isValid;
}

bool OAIUniqueGiftInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_origin_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owned_gift_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_transfer_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIUniqueGiftInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_gift_isValid && m_origin_isValid && true;
}

} // namespace tele_rest
