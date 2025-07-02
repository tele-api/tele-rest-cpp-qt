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

/*
 * OAIUpgradeGiftRequest.h
 *
 * Request parameters for upgradeGift
 */

#ifndef OAIUpgradeGiftRequest_H
#define OAIUpgradeGiftRequest_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {

class OAIUpgradeGiftRequest : public OAIObject {
public:
    OAIUpgradeGiftRequest();
    OAIUpgradeGiftRequest(QString json);
    ~OAIUpgradeGiftRequest() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getBusinessConnectionId() const;
    void setBusinessConnectionId(const QString &business_connection_id);
    bool is_business_connection_id_Set() const;
    bool is_business_connection_id_Valid() const;

    QString getOwnedGiftId() const;
    void setOwnedGiftId(const QString &owned_gift_id);
    bool is_owned_gift_id_Set() const;
    bool is_owned_gift_id_Valid() const;

    bool isKeepOriginalDetails() const;
    void setKeepOriginalDetails(const bool &keep_original_details);
    bool is_keep_original_details_Set() const;
    bool is_keep_original_details_Valid() const;

    qint32 getStarCount() const;
    void setStarCount(const qint32 &star_count);
    bool is_star_count_Set() const;
    bool is_star_count_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_business_connection_id;
    bool m_business_connection_id_isSet;
    bool m_business_connection_id_isValid;

    QString m_owned_gift_id;
    bool m_owned_gift_id_isSet;
    bool m_owned_gift_id_isValid;

    bool m_keep_original_details;
    bool m_keep_original_details_isSet;
    bool m_keep_original_details_isValid;

    qint32 m_star_count;
    bool m_star_count_isSet;
    bool m_star_count_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIUpgradeGiftRequest)

#endif // OAIUpgradeGiftRequest_H
