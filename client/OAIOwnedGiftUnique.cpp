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

#include "OAIOwnedGiftUnique.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIOwnedGiftUnique::OAIOwnedGiftUnique(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIOwnedGiftUnique::OAIOwnedGiftUnique() {
    this->initializeModel();
}

OAIOwnedGiftUnique::~OAIOwnedGiftUnique() {}

void OAIOwnedGiftUnique::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_send_date_isSet = false;
    m_send_date_isValid = false;

    m_owned_gift_id_isSet = false;
    m_owned_gift_id_isValid = false;

    m_sender_user_isSet = false;
    m_sender_user_isValid = false;

    m_is_saved_isSet = false;
    m_is_saved_isValid = false;

    m_can_be_transferred_isSet = false;
    m_can_be_transferred_isValid = false;

    m_transfer_star_count_isSet = false;
    m_transfer_star_count_isValid = false;
}

void OAIOwnedGiftUnique::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIOwnedGiftUnique::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::tele_rest::fromJsonValue(m_type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_send_date_isValid = ::tele_rest::fromJsonValue(m_send_date, json[QString("send_date")]);
    m_send_date_isSet = !json[QString("send_date")].isNull() && m_send_date_isValid;

    m_owned_gift_id_isValid = ::tele_rest::fromJsonValue(m_owned_gift_id, json[QString("owned_gift_id")]);
    m_owned_gift_id_isSet = !json[QString("owned_gift_id")].isNull() && m_owned_gift_id_isValid;

    m_sender_user_isValid = ::tele_rest::fromJsonValue(m_sender_user, json[QString("sender_user")]);
    m_sender_user_isSet = !json[QString("sender_user")].isNull() && m_sender_user_isValid;

    m_is_saved_isValid = ::tele_rest::fromJsonValue(m_is_saved, json[QString("is_saved")]);
    m_is_saved_isSet = !json[QString("is_saved")].isNull() && m_is_saved_isValid;

    m_can_be_transferred_isValid = ::tele_rest::fromJsonValue(m_can_be_transferred, json[QString("can_be_transferred")]);
    m_can_be_transferred_isSet = !json[QString("can_be_transferred")].isNull() && m_can_be_transferred_isValid;

    m_transfer_star_count_isValid = ::tele_rest::fromJsonValue(m_transfer_star_count, json[QString("transfer_star_count")]);
    m_transfer_star_count_isSet = !json[QString("transfer_star_count")].isNull() && m_transfer_star_count_isValid;
}

QString OAIOwnedGiftUnique::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIOwnedGiftUnique::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::tele_rest::toJsonValue(m_type));
    }
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_send_date_isSet) {
        obj.insert(QString("send_date"), ::tele_rest::toJsonValue(m_send_date));
    }
    if (m_owned_gift_id_isSet) {
        obj.insert(QString("owned_gift_id"), ::tele_rest::toJsonValue(m_owned_gift_id));
    }
    if (m_sender_user.isSet()) {
        obj.insert(QString("sender_user"), ::tele_rest::toJsonValue(m_sender_user));
    }
    if (m_is_saved_isSet) {
        obj.insert(QString("is_saved"), ::tele_rest::toJsonValue(m_is_saved));
    }
    if (m_can_be_transferred_isSet) {
        obj.insert(QString("can_be_transferred"), ::tele_rest::toJsonValue(m_can_be_transferred));
    }
    if (m_transfer_star_count_isSet) {
        obj.insert(QString("transfer_star_count"), ::tele_rest::toJsonValue(m_transfer_star_count));
    }
    return obj;
}

QString OAIOwnedGiftUnique::getType() const {
    return m_type;
}
void OAIOwnedGiftUnique::setType(const QString &type) {
    m_type = type;
    m_type_isSet = true;
}

bool OAIOwnedGiftUnique::is_type_Set() const{
    return m_type_isSet;
}

bool OAIOwnedGiftUnique::is_type_Valid() const{
    return m_type_isValid;
}

OAIUniqueGift OAIOwnedGiftUnique::getGift() const {
    return m_gift;
}
void OAIOwnedGiftUnique::setGift(const OAIUniqueGift &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAIOwnedGiftUnique::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAIOwnedGiftUnique::is_gift_Valid() const{
    return m_gift_isValid;
}

qint32 OAIOwnedGiftUnique::getSendDate() const {
    return m_send_date;
}
void OAIOwnedGiftUnique::setSendDate(const qint32 &send_date) {
    m_send_date = send_date;
    m_send_date_isSet = true;
}

bool OAIOwnedGiftUnique::is_send_date_Set() const{
    return m_send_date_isSet;
}

bool OAIOwnedGiftUnique::is_send_date_Valid() const{
    return m_send_date_isValid;
}

QString OAIOwnedGiftUnique::getOwnedGiftId() const {
    return m_owned_gift_id;
}
void OAIOwnedGiftUnique::setOwnedGiftId(const QString &owned_gift_id) {
    m_owned_gift_id = owned_gift_id;
    m_owned_gift_id_isSet = true;
}

bool OAIOwnedGiftUnique::is_owned_gift_id_Set() const{
    return m_owned_gift_id_isSet;
}

bool OAIOwnedGiftUnique::is_owned_gift_id_Valid() const{
    return m_owned_gift_id_isValid;
}

OAIUser OAIOwnedGiftUnique::getSenderUser() const {
    return m_sender_user;
}
void OAIOwnedGiftUnique::setSenderUser(const OAIUser &sender_user) {
    m_sender_user = sender_user;
    m_sender_user_isSet = true;
}

bool OAIOwnedGiftUnique::is_sender_user_Set() const{
    return m_sender_user_isSet;
}

bool OAIOwnedGiftUnique::is_sender_user_Valid() const{
    return m_sender_user_isValid;
}

bool OAIOwnedGiftUnique::isIsSaved() const {
    return m_is_saved;
}
void OAIOwnedGiftUnique::setIsSaved(const bool &is_saved) {
    m_is_saved = is_saved;
    m_is_saved_isSet = true;
}

bool OAIOwnedGiftUnique::is_is_saved_Set() const{
    return m_is_saved_isSet;
}

bool OAIOwnedGiftUnique::is_is_saved_Valid() const{
    return m_is_saved_isValid;
}

bool OAIOwnedGiftUnique::isCanBeTransferred() const {
    return m_can_be_transferred;
}
void OAIOwnedGiftUnique::setCanBeTransferred(const bool &can_be_transferred) {
    m_can_be_transferred = can_be_transferred;
    m_can_be_transferred_isSet = true;
}

bool OAIOwnedGiftUnique::is_can_be_transferred_Set() const{
    return m_can_be_transferred_isSet;
}

bool OAIOwnedGiftUnique::is_can_be_transferred_Valid() const{
    return m_can_be_transferred_isValid;
}

qint32 OAIOwnedGiftUnique::getTransferStarCount() const {
    return m_transfer_star_count;
}
void OAIOwnedGiftUnique::setTransferStarCount(const qint32 &transfer_star_count) {
    m_transfer_star_count = transfer_star_count;
    m_transfer_star_count_isSet = true;
}

bool OAIOwnedGiftUnique::is_transfer_star_count_Set() const{
    return m_transfer_star_count_isSet;
}

bool OAIOwnedGiftUnique::is_transfer_star_count_Valid() const{
    return m_transfer_star_count_isValid;
}

bool OAIOwnedGiftUnique::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_send_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_owned_gift_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_user.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_saved_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_can_be_transferred_isSet) {
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

bool OAIOwnedGiftUnique::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_gift_isValid && m_send_date_isValid && true;
}

} // namespace tele_rest
